/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gapFromPBGap:(id)arg1 ;
+(id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3 ;
-(NSString *)description;
-(FCFeedRefreshSession *)refreshSession;
-(id)copyWithRefreshSession:(id)arg1 ;
-(long long)feedElementType;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isGap;
-(id)initWithRefreshSession:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

