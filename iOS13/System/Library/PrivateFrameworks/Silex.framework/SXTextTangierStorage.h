/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPStorage.h>

@class NSLocale, NSSet, NSMutableArray, NSCache;

@interface SXTextTangierStorage : TSWPStorage {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	os_unfair_lock_s _unfairLock;
	NSLocale* _locale;
	NSSet* _rangedExclusionPaths;
	NSMutableArray* _attachments;
	NSCache* _tokenizersCache;

}

@property (nonatomic,retain) NSMutableArray * attachments;               //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSCache * tokenizersCache;                  //@synthesize tokenizersCache=_tokenizersCache - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                          //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                       //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,retain) NSSet * rangedExclusionPaths;               //@synthesize rangedExclusionPaths=_rangedExclusionPaths - In the implementation block
-(void)dealloc;
-(NSLocale *)locale;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(BOOL)supportsSections;
-(os_unfair_lock_s)unfairLock;
-(id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5 ;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(NSSet *)rangedExclusionPaths;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(NSCache *)tokenizersCache;
-(void)setTokenizersCache:(NSCache *)arg1 ;
-(void)setRangedExclusionPaths:(NSSet *)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(BOOL)shouldHyphenate;
@end

