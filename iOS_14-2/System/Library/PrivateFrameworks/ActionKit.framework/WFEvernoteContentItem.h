/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class ENNoteRef;

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) ENNoteRef * noteRef; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(void)createNoteWithContent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)itemWithNoteRef:(id)arg1 note:(id)arg2 ;
-(id)name;
-(ENNoteRef *)noteRef;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)preferredFileType;
-(BOOL)canEncodeWithCoder:(id)arg1 ;
@end

