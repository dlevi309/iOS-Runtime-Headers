/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SXComponentLayoutRules : NSObject <NSCopying> {

	BOOL _allowsIntersection;
	BOOL _shouldSpanAllColumns;
	BOOL _allowsSiblingBasedResizing;
	BOOL _shouldIgnoreDocumentMargin;
	unsigned long long _minimumColumnSpan;

}

@property (assign,nonatomic) unsigned long long minimumColumnSpan;              //@synthesize minimumColumnSpan=_minimumColumnSpan - In the implementation block
@property (assign,nonatomic) BOOL allowsIntersection;                           //@synthesize allowsIntersection=_allowsIntersection - In the implementation block
@property (assign,nonatomic) BOOL shouldSpanAllColumns;                         //@synthesize shouldSpanAllColumns=_shouldSpanAllColumns - In the implementation block
@property (assign,nonatomic) BOOL allowsSiblingBasedResizing;                   //@synthesize allowsSiblingBasedResizing=_allowsSiblingBasedResizing - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDocumentMargin;                   //@synthesize shouldIgnoreDocumentMargin=_shouldIgnoreDocumentMargin - In the implementation block
+(id)twoColumnLayoutRules;
+(id)fullWidthLayoutRules;
+(id)bodyComponentLayoutRules;
+(id)defaultLayoutRules;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsIntersection;
-(unsigned long long)minimumColumnSpan;
-(void)setMinimumColumnSpan:(unsigned long long)arg1 ;
-(void)setAllowsIntersection:(BOOL)arg1 ;
-(BOOL)shouldSpanAllColumns;
-(void)setShouldSpanAllColumns:(BOOL)arg1 ;
-(BOOL)shouldIgnoreDocumentMargin;
-(void)setShouldIgnoreDocumentMargin:(BOOL)arg1 ;
-(BOOL)allowsSiblingBasedResizing;
-(void)setAllowsSiblingBasedResizing:(BOOL)arg1 ;
@end

