/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/TITransientLexiconManaging.h>

@class NSString;

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging> {

	LXLexiconRef _namedEntityLexiconRef;
	LXLexiconRef _namedEntityPhraseLexiconRef;
	BOOL _lexiconsLoaded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityLexicon; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityPhraseLexicon; 
+(id)sharedInstance;
+(id)getEntries:(LXLexiconRef)arg1 ;
+(id)singletonInstance;
+(void)setSharedTITransientLexiconManager:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)loadLexicons;
-(BOOL)searchForWord:(id)arg1 ;
-(BOOL)searchForWordCaseInsensitive:(id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(void)debugLogEntities;
-(const LXLexiconRef)namedEntityLexicon;
-(const LXLexiconRef)namedEntityPhraseLexicon;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(BOOL)searchHelper:(LXLexiconRef)arg1 forWord:(CFStringRef)arg2 caseSensitive:(BOOL)arg3 ;
@end

