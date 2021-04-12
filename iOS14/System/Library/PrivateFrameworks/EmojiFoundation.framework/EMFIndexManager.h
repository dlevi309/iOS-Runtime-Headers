/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@class NSBundle, NSLock, EMFInvertedIndex;

@interface EMFIndexManager : NSObject {

	NSBundle* _searchEngineBundle;
	NSLock* _defaultIndexLock;
	NSLock* _stemmedIndexLock;
	BOOL _triedLoadingDefaultIndex;
	BOOL _triedLoadingStemmedIndex;
	EMFInvertedIndex* _defaultIndex;
	EMFInvertedIndex* _stemmedIndex;

}

@property (nonatomic,copy) EMFInvertedIndex * defaultIndex;              //@synthesize defaultIndex=_defaultIndex - In the implementation block
@property (nonatomic,copy) EMFInvertedIndex * stemmedIndex;              //@synthesize stemmedIndex=_stemmedIndex - In the implementation block
-(id)initWithBundle:(id)arg1 ;
-(EMFInvertedIndex *)defaultIndex;
-(void)setDefaultIndex:(EMFInvertedIndex *)arg1 ;
-(EMFInvertedIndex *)stemmedIndex;
-(void)preheatIndexes;
-(void)setStemmedIndex:(EMFInvertedIndex *)arg1 ;
@end

