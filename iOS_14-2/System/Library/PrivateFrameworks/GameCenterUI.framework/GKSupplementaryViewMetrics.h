/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {

	BOOL _shouldPin;
	BOOL _hidden;
	BOOL _shouldUseGlobalIndexing;
	BOOL _shouldPinGlobal;
	double _desiredWidth;
	double _desiredHeight;
	NSString* _kind;
	Class _reusableViewClass;
	SEL _configurator;
	id _target;
	long long _animateWithSection;
	NSRange _globalSectionRange;

}

@property (assign,nonatomic) BOOL shouldUseGlobalIndexing;              //@synthesize shouldUseGlobalIndexing=_shouldUseGlobalIndexing - In the implementation block
@property (assign,nonatomic) BOOL shouldPinGlobal;                      //@synthesize shouldPinGlobal=_shouldPinGlobal - In the implementation block
@property (assign,nonatomic) NSRange globalSectionRange;                //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) long long animateWithSection;              //@synthesize animateWithSection=_animateWithSection - In the implementation block
@property (assign,nonatomic) double desiredWidth;                       //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (assign,nonatomic) double desiredHeight;                      //@synthesize desiredHeight=_desiredHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldPin;                            //@synthesize shouldPin=_shouldPin - In the implementation block
@property (nonatomic,retain) NSString * kind;                           //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) Class reusableViewClass;                   //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic) SEL configurator;                          //@synthesize configurator=_configurator - In the implementation block
@property (assign,nonatomic) id target;                                 //@synthesize target=_target - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;               //@synthesize hidden=_hidden - In the implementation block
+(id)supplementaryMetrics;
-(void)setTarget:(id)arg1 ;
-(BOOL)isHidden;
-(void)setConfigurator:(SEL)arg1 ;
-(SEL)configurator;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(double)desiredWidth;
-(double)desiredHeight;
-(void)setDesiredWidth:(double)arg1 ;
-(NSString *)kind;
-(id)description;
-(void)setKind:(NSString *)arg1 ;
-(void)setShouldPin:(BOOL)arg1 ;
-(void)setDesiredHeight:(double)arg1 ;
-(void)setShouldPinGlobal:(BOOL)arg1 ;
-(void)setShouldUseGlobalIndexing:(BOOL)arg1 ;
-(id)localDescription;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(Class)reusableViewClass;
-(id)target;
-(BOOL)shouldPin;
-(void)setReusableViewClass:(Class)arg1 ;
-(void)setAnimateWithSection:(long long)arg1 ;
-(CGSize)sizeForCollectionView:(id)arg1 ;
-(BOOL)shouldUseGlobalIndexing;
-(BOOL)shouldPinGlobal;
-(NSRange)globalSectionRange;
-(long long)animateWithSection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

