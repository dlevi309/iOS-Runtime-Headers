/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

@class NSData, AFDisambiguationInfo;


@protocol AFDisambiguationAssistancePrivate
@property (nonatomic,readonly) NSData * af_disambiguationIdentifier; 
@property (setter=af_setDisambiguationInfo:,nonatomic,retain) AFDisambiguationInfo * af_disambiguationInfo; 
@required
-(NSData *)af_disambiguationIdentifier;
-(id)af_indexIdentifierForItem:(id)arg1;
-(id)af_itemForIndexIdentifier:(id)arg1;
-(AFDisambiguationInfo *)af_disambiguationInfo;
-(void)af_setDisambiguationInfo:(id)arg1;

@end

