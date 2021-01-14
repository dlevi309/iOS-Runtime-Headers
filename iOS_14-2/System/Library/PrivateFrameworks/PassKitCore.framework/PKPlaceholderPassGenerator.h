/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSURL, PKPass, NSMutableDictionary, NSString, NSArray;

@interface PKPlaceholderPassGenerator : NSObject {

	NSURL* _templateDirectory;
	PKPass* _templatePass;
	NSMutableDictionary* _passContent;

}

@property (nonatomic,retain) NSMutableDictionary * passContent;                     //@synthesize passContent=_passContent - In the implementation block
@property (nonatomic,copy) NSString * serialNumber; 
@property (nonatomic,copy) NSArray * associatedApplicationIdentifiers; 
@property (nonatomic,copy) NSString * primaryAccountIdentifier; 
+(id)manifestForDirectory:(id)arg1 error:(id*)arg2 ;
+(id)manifestSignatureForDirectory:(id)arg1 passCertificate:(id)arg2 appleWWDRCertificate:(id)arg3 certificatePassword:(id)arg4 error:(id*)arg5 ;
-(NSString *)serialNumber;
-(NSMutableDictionary *)passContent;
-(void)insertPassField:(id)arg1 ;
-(void)setPassContent:(NSMutableDictionary *)arg1 ;
-(id)initWithPassTemplate:(id)arg1 error:(id*)arg2 ;
-(long long)updatePaymentApplicationsWithBlock:(/*^block*/id)arg1 ;
-(id)generatePass;
-(id)generateAndSignPassWithPassCertificate:(id)arg1 appleWWDRCertificate:(id)arg2 certificatePassword:(id)arg3 error:(id*)arg4 ;
-(void)insertPaymentApplication:(id)arg1 ;
-(long long)updatePassUpgradeRequestsWithBlock:(/*^block*/id)arg1 ;
-(void)setAssociatedApplicationIdentifiers:(NSArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(id)passTypeIdentifier;
-(void)setPassTypeIdentifier:(id)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSArray *)associatedApplicationIdentifiers;
-(void)setSerialNumber:(NSString *)arg1 ;
@end

