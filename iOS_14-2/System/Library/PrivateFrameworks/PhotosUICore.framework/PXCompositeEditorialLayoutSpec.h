/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject {

	NSArray* _templates;
	long long _minNumberOfRects;
	long long _maxNumberOfRects;
	long long _minNumberOfColumns;
	NSMapTable* _preferredNextTemplatesByCurrentTemplate;

}

@property (nonatomic,readonly) NSMapTable * preferredNextTemplatesByCurrentTemplate;              //@synthesize preferredNextTemplatesByCurrentTemplate=_preferredNextTemplatesByCurrentTemplate - In the implementation block
@property (nonatomic,readonly) NSArray * templates;                                               //@synthesize templates=_templates - In the implementation block
@property (nonatomic,readonly) long long minNumberOfRects;                                        //@synthesize minNumberOfRects=_minNumberOfRects - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfRects;                                        //@synthesize maxNumberOfRects=_maxNumberOfRects - In the implementation block
@property (nonatomic,readonly) long long minNumberOfColumns;                                      //@synthesize minNumberOfColumns=_minNumberOfColumns - In the implementation block
+(id)defaultSpec;
-(id)init;
-(NSArray *)templates;
-(void)prepareBuiltinSpec;
-(id)preferredNextTemplatesForTemplate:(id)arg1 ;
-(long long)minNumberOfRects;
-(long long)maxNumberOfRects;
-(long long)minNumberOfColumns;
-(NSMapTable *)preferredNextTemplatesByCurrentTemplate;
-(id)_init;
@end

