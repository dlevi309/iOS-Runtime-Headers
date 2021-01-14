/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXTapToRadar.h>

@protocol PXCMMPersonSuggestion;
@class PXRecipient, NSString, CNContact, NSDictionary;

@interface PXCMMComposeRecipient : NSObject <NSCopying, PXTapToRadar> {

	PXRecipient* _recipient;
	id<PXCMMPersonSuggestion> _personSuggestion;

}

@property (nonatomic,readonly) PXRecipient * recipient;                                 //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) id<PXCMMPersonSuggestion> personSuggestion;              //@synthesize personSuggestion=_personSuggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) NSDictionary * diagnosticDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(CNContact *)contact;
-(NSDictionary *)diagnosticDictionary;
-(id<PXCMMPersonSuggestion>)personSuggestion;
-(id)initWithPersonSuggestion:(id)arg1 ;
-(NSString *)description;
-(id)initWithRecipient:(id)arg1 ;
-(unsigned long long)hash;
-(PXRecipient *)recipient;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

