/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFDataDetectorResults, NSString;

@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass> {

	WFDataDetectorResults* _dataDetectorResults;

}

@property (nonatomic,retain) WFDataDetectorResults * dataDetectorResults;              //@synthesize dataDetectorResults=_dataDetectorResults - In the implementation block
@property (nonatomic,readonly) NSString * string; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(NSString *)string;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)isContent;
-(WFDataDetectorResults *)dataDetectorResults;
-(id)generateObjectsForClass:(Class)arg1 error:(id*)arg2 ;
-(void)setDataDetectorResults:(WFDataDetectorResults *)arg1 ;
@end

