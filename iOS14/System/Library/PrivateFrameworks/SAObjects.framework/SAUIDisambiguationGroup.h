/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>
#import <libobjc.A.dylib/AFDisambiguationAssistancePrivate.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, AFDisambiguationInfo, NSArray, NSString;

@interface SAUIDisambiguationGroup : SAAceView <AFDisambiguationAssistancePrivate, SAAceSerializable>

@property (nonatomic,readonly) NSData * af_disambiguationIdentifier; 
@property (setter=af_setDisambiguationInfo:,nonatomic,retain) AFDisambiguationInfo * af_disambiguationInfo; 
@property (nonatomic,copy) NSArray * disambiguationLists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disambiguationGroup;
+(id)disambiguationGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)af_disambiguationIdentifier;
-(id)af_indexIdentifierForItem:(id)arg1 ;
-(id)af_itemForIndexIdentifier:(id)arg1 ;
-(AFDisambiguationInfo *)af_disambiguationInfo;
-(void)af_setDisambiguationInfo:(id)arg1 ;
-(id)af_assistedSelectionItem;
-(void)af_saveItemSelection:(id)arg1 forType:(long long)arg2 ;
-(id)groupIdentifier;
-(NSArray *)disambiguationLists;
-(id)encodedClassName;
-(void)setDisambiguationLists:(NSArray *)arg1 ;
@end

