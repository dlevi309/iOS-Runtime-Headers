/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding> {

	unsigned long long _pageIndex;
	NSArray* _stacks;
	NSArray* _panels;
	NSDictionary* _appLocations;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,copy) NSArray * stacks;                            //@synthesize stacks=_stacks - In the implementation block
@property (nonatomic,copy) NSArray * panels;                            //@synthesize panels=_panels - In the implementation block
@property (nonatomic,copy) NSDictionary * appLocations;                 //@synthesize appLocations=_appLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(BOOL)_containsWidgetWithExtensionBundleId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)panels;
-(unsigned long long)pageIndex;
-(id)description;
-(BOOL)containsAppPredictionPanel;
-(BOOL)containsSuggestionsWidget;
-(void)setAppLocations:(NSDictionary *)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setStacks:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)appLocations;
-(NSArray *)stacks;
-(void)setPanels:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

