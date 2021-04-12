/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@class NSString, NSArray;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement> {

	NSString* _identifier;
	NSString* _firstGroupID;
	NSString* _lastGroupID;
	NSArray* _hiddenElements;

}

@property (nonatomic,copy,readonly) NSString * firstGroupID;               //@synthesize firstGroupID=_firstGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastGroupID;                //@synthesize lastGroupID=_lastGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hiddenElements;              //@synthesize hiddenElements=_hiddenElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)copyWithIdentifier:(id)arg1 ;
-(NSString *)firstGroupID;
-(NSString *)lastGroupID;
-(long long)feedElementType;
-(id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3 ;
-(NSArray *)hiddenElements;
-(id)copyWithHiddenElements:(id)arg1 ;
-(BOOL)isGap;
-(id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4 ;
@end

