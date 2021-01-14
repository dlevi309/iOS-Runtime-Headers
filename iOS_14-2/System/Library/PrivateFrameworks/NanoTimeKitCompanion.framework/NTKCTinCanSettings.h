/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKCTinCanSettings : NSObject {

	BOOL _tinCanEnabled;

}

@property (nonatomic,readonly) BOOL tinCanEnabled;              //@synthesize tinCanEnabled=_tinCanEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_handlePrefsChanged;
-(void)dealloc;
-(void)_notifyClientsOfChange;
-(void)_readValue;
-(BOOL)tinCanEnabled;
@end

