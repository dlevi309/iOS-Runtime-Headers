/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class NSMutableArray, AKSignature, AKController, NSArray;

@interface AKSignatureModelController : NSObject {

	int _nextUID;
	BOOL _signaturesDecryptionAttempted;
	NSMutableArray* _signatures;
	AKSignature* _selectedSignature;
	AKController* _controller;

}

@property (__weak) AKController * controller;                              //@synthesize controller=_controller - In the implementation block
@property (readonly) NSArray * signatures; 
@property (nonatomic,retain) AKSignature * selectedSignature;              //@synthesize selectedSignature=_selectedSignature - In the implementation block
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)_saveSignatureToPersistentStorage:(id)arg1 ;
-(BOOL)_deleteSignatureFromKeychain:(id)arg1 ;
-(void)_loadSignaturesFromPersistentStorage;
-(id)_createAKSignatureFromItemRef:(id)arg1 ;
-(BOOL)_createNewKeychainItemWithSignature:(id)arg1 ;
-(void)insertObject:(id)arg1 inSignaturesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSignaturesAtIndex:(unsigned long long)arg1 ;
-(NSArray *)signatures;
-(void)reloadSignaturesFromSource;
-(void)_migrateLegacySignaturesFromPreviewContainer;
-(AKSignature *)selectedSignature;
-(void)setSelectedSignature:(AKSignature *)arg1 ;
@end

