/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TIPreferencesController.h>

@class NSXPCConnection, NSString;

@interface TIPreferencesControllerClient : TIPreferencesController {

	NSXPCConnection* _connection;
	BOOL _writeable;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)sharedPreferencesController;
+(id)serviceInterface;
-(void)setMachName:(NSString *)arg1 ;
-(id)init;
-(void)_disconnect;
-(void)updateInputModes:(id)arg1 ;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(void)performWithWriteability:(BOOL)arg1 operations:(/*^block*/id)arg2 ;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

