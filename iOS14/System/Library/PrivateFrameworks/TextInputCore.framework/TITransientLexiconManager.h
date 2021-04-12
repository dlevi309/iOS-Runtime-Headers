/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/TITransientLexiconManaging.h>

@protocol _ICLexiconManaging;
@class NSString;

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging> {

	LXLexiconRef _namedEntityLexiconRef;
	LXLexiconRef _namedEntityPhraseLexiconRef;
	id<_ICLexiconManaging> _inputContextLexiconManager;
	BOOL _lexiconsLoaded;

}

@property (nonatomic,readonly) const LXLexiconRef namedEntityLexicon; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityPhraseLexicon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)singletonInstance;
+(void)setSharedTITransientLexiconManager:(id)arg1 ;
+(id)getEntries:(LXLexiconRef)arg1 ;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)loadLexicons;
-(id)init;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(const LXLexiconRef)namedEntityLexicon;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(BOOL)searchForWordCaseInsensitive:(id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(BOOL)searchForWord:(id)arg1 ;
-(BOOL)searchHelper:(LXLexiconRef)arg1 forWord:(CFStringRef)arg2 caseSensitive:(BOOL)arg3 ;
-(const LXLexiconRef)namedEntityPhraseLexicon;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)debugLogEntities;
-(void)dealloc;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
@end

