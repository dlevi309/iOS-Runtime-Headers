/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	long long _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) long long updateState;                          //@synthesize updateState=_updateState - In the implementation block
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDate *)installDate;
-(long long)updateState;
-(long long)storeItemIdentifier;
-(void)setInstallDate:(NSDate *)arg1 ;
-(void)dealloc;
@end

