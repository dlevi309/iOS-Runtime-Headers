/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIBarInsertLayoutData : NSObject <NSCopying> {

	BOOL _collapsible;
	BOOL _prefersExpanded;
	BOOL _ignoredForCollapsingBehaviors;
	BOOL _active;
	NSString* _identifier;
	double _minimumHeight;
	double _preferredHeight;
	double _assignedHeight;
	double _collapsingHeight;
	long long _priority;
	long long _order;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                     //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,getter=isCollapsible,nonatomic) BOOL collapsible;                      //@synthesize collapsible=_collapsible - In the implementation block
@property (assign,nonatomic) BOOL prefersExpanded;                                       //@synthesize prefersExpanded=_prefersExpanded - In the implementation block
@property (nonatomic,readonly) double layoutMinimumHeight; 
@property (getter=isVariableHeight,nonatomic,readonly) BOOL variableHeight; 
@property (nonatomic,readonly) double assignedHeight;                                    //@synthesize assignedHeight=_assignedHeight - In the implementation block
@property (nonatomic,readonly) double collapsingHeight;                                  //@synthesize collapsingHeight=_collapsingHeight - In the implementation block
@property (assign,nonatomic) long long priority;                                         //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long order;                                            //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL ignoredForCollapsingBehaviors;                         //@synthesize ignoredForCollapsingBehaviors=_ignoredForCollapsingBehaviors - In the implementation block
@property (assign,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
+(void)updateLayoutParameters:(id)arg1 overflowLayout:(id)arg2 forAvailableHeight:(double)arg3 ;
+(id)calculateRestingHeightsForLayouts:(id)arg1 ;
+(SCD_Struct_UI25)calculateLayoutHeights:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)order;
-(void)setActive:(BOOL)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)active;
-(void)setFixedHeight:(double)arg1 ;
-(double)layoutMinimumHeight;
-(BOOL)isVariableHeight;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(double)preferredHeight;
-(void)setPreferredHeight:(double)arg1 ;
-(BOOL)isCollapsible;
-(void)setCollapsible:(BOOL)arg1 ;
-(BOOL)prefersExpanded;
-(void)setPrefersExpanded:(BOOL)arg1 ;
-(double)assignedHeight;
-(double)collapsingHeight;
-(void)setOrder:(long long)arg1 ;
-(BOOL)ignoredForCollapsingBehaviors;
-(void)setIgnoredForCollapsingBehaviors:(BOOL)arg1 ;
@end

