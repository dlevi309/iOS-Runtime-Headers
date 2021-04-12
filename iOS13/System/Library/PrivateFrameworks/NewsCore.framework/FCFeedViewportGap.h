/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@class NSString, FCFeedRefreshSession;

@interface FCFeedViewportGap : NSObject <FCFeedElement> {

	NSString* _identifier;
	FCFeedRefreshSession* _refreshSession;

}

@property (nonatomic,readonly) FCFeedRefreshSession * refreshSession;              //@synthesize refreshSession=_refreshSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3 ;
+(id)gapFromPBGap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(long long)feedElementType;
-(FCFeedRefreshSession *)refreshSession;
-(id)copyWithRefreshSession:(id)arg1 ;
-(BOOL)isGap;
-(id)initWithRefreshSession:(id)arg1 ;
@end

