/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSArray, NSMutableArray;

@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject {

	NSArray* _providedFields;
	NSMutableArray* _completedFields;
	unsigned long long _currentIndex;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSArray * providedFields;                      //@synthesize providedFields=_providedFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * completedFields;              //@synthesize completedFields=_completedFields - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
-(unsigned long long)currentIndex;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(void)invalidate;
-(void)_showCurrentPasscodePromptOrComplete;
-(void)_invokeCompletionHandler;
-(void)requestNumericInputForFields:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showNextPasscodePromptOrComplete;
-(NSArray *)providedFields;
-(void)setProvidedFields:(NSArray *)arg1 ;
-(NSMutableArray *)completedFields;
-(void)setCompletedFields:(NSMutableArray *)arg1 ;
@end

