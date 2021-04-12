/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/


@protocol OS_dispatch_queue;
@class NSExtension, NSArray, NSObject, NSHashTable;

@interface ILClassificationController : NSObject {

	NSExtension* _electedExtension;
	NSArray* _extensions;
	NSObject*<OS_dispatch_queue> _queue;
	id _matchingExtensionToken;
	NSHashTable* _delegates;
	/*^block*/id _firstMatchCompletionBlock;

}

@property (nonatomic,copy) NSArray * extensions;                                                           //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id matchingExtensionToken;                                                  //@synthesize matchingExtensionToken=_matchingExtensionToken - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                                    //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,copy) id firstMatchCompletionBlock;                                                   //@synthesize firstMatchCompletionBlock=_firstMatchCompletionBlock - In the implementation block
@property (nonatomic,copy) NSExtension * electedExtension;                                                 //@synthesize electedExtension=_electedExtension - In the implementation block
@property (getter=isClassificationAvailable,nonatomic,readonly) BOOL classificationAvailable; 
+(id)sharedInstance;
+(BOOL)shouldActivate;
+(id)electedExtensionFromExtensions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)extensions;
-(BOOL)isClassificationAvailable;
-(NSHashTable *)delegates;
-(void)setExtensions:(NSArray *)arg1 ;
-(void)beginMatchingExtensionsWithFirstCompletion:(/*^block*/id)arg1 ;
-(void)setFirstMatchCompletionBlock:(id)arg1 ;
-(void)updateExtensions:(id)arg1 electedExtensions:(id)arg2 ;
-(id)firstMatchCompletionBlock;
-(NSExtension *)electedExtension;
-(id)matchingExtensionToken;
-(void)setElectedExtension:(NSExtension *)arg1 ;
@end

