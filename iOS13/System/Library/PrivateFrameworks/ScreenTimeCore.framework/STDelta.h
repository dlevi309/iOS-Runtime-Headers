/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, NSDictionary;

@interface STDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(long long)changeType;
-(NSString *)uniqueIdentifier;
-(void)deleted;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)changedWithDictionary:(id)arg1 ;
@end

