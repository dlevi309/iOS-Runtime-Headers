/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) INCustomObject * customObject; 
+(BOOL)supportsSecureCoding;
+(id)codableDescription;
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(INCustomObject *)customObject;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
@end

