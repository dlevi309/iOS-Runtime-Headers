/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCNComposeRecipient.h>
#import <libobjc.A.dylib/PXRecipientSearchResult.h>

@class NSString;

@interface PXCNRecipientSearchResult : PXCNComposeRecipient <PXRecipientSearchResult> {

	long long _validationType;

}

@property (assign,nonatomic) long long validationType;              //@synthesize validationType=_validationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)validationType;
-(void)setValidationType:(long long)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

