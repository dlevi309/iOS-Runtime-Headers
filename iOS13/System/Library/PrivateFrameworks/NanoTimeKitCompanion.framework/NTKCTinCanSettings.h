/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKCTinCanSettings : NSObject {

	BOOL _tinCanEnabled;

}

@property (nonatomic,readonly) BOOL tinCanEnabled;              //@synthesize tinCanEnabled=_tinCanEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_readValue;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(BOOL)tinCanEnabled;
@end

