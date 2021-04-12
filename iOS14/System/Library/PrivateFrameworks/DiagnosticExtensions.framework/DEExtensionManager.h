/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface DEExtensionManager : NSObject {

	BOOL _extendedLoaded;
	NSObject*<OS_dispatch_queue> _initialLoadQueue;
	NSArray* _extensions;
	/*^block*/id _afterExtendedBlock;

}

@property (nonatomic,retain) NSArray * extensions;                                       //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy) id afterExtendedBlock;                                        //@synthesize afterExtendedBlock=_afterExtendedBlock - In the implementation block
@property (assign,nonatomic) BOOL extendedLoaded;                                        //@synthesize extendedLoaded=_extendedLoaded - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initialLoadQueue;              //@synthesize initialLoadQueue=_initialLoadQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)loadExtensions;
-(void)setInitialLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAfterExtendedBlock:(id)arg1 ;
-(void)setExtendedLoaded:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)initialLoadQueue;
-(id)extensionsWithFilter:(id)arg1 ;
-(id)afterExtendedBlock;
-(BOOL)extendedLoaded;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
-(id)extensionForIdentifier:(id)arg1 ;
@end

