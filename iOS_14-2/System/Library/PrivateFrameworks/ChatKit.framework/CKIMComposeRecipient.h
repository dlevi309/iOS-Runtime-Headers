/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _useAbbreviatedDisplayName;

}

@property (nonatomic,readonly) IMHandle * handle;                         //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL useAbbreviatedDisplayName;              //@synthesize useAbbreviatedDisplayName=_useAbbreviatedDisplayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithHandle:(id)arg1 ;
-(id)displayString;
-(IMHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)address;
-(BOOL)useAbbreviatedDisplayName;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)compositeName;
-(id)uncommentedAddress;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(void)setIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseAbbreviatedDisplayName:(BOOL)arg1 ;
-(void)releaseIMReferences;
-(BOOL)isEqual:(id)arg1 ;
@end

