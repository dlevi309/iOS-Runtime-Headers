/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipient.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@protocol CKIMComposeRecipient <NSObject>
@required
-(void)releaseIMReferences;

@end


@class IMHandle, NSString;

@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient> {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;                   //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)identifier;
-(IMHandle *)handle;
-(void)setIdentifier:(int)arg1 ;
-(id)address;
-(id)initWithHandle:(id)arg1 ;
-(id)displayString;
-(id)uncommentedAddress;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(void)releaseIMReferences;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
@end

