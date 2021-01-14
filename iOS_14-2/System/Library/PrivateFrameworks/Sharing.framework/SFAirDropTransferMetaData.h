/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, NSArray;

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding> {

	BOOL _canAutoAccept;
	BOOL _didAutoAccept;
	BOOL _verifiableIdentity;
	BOOL _senderIsMe;
	long long _transferTypes;
	NSString* _contactIdentifier;
	NSString* _senderBundleID;
	NSString* _senderComputerName;
	NSString* _senderEmail;
	NSString* _senderEmailHash;
	NSString* _senderCompositeName;
	NSString* _senderFirstName;
	NSString* _senderLastName;
	NSString* _senderID;
	id _senderIcon;
	id _smallPreviewImage;
	id _previewImage;
	NSString* _itemsDescription;
	NSDictionary* _itemsDescriptionAdvanced;
	NSSet* _items;
	NSArray* _rawFiles;

}

@property (assign,nonatomic) long long transferTypes;                                            //@synthesize transferTypes=_transferTypes - In the implementation block
@property (nonatomic,copy) NSSet * items;                                                        //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL didAutoAccept;                                                 //@synthesize didAutoAccept=_didAutoAccept - In the implementation block
@property (nonatomic,readonly) BOOL canAutoAccept;                                               //@synthesize canAutoAccept=_canAutoAccept - In the implementation block
@property (getter=isVerifiableIdentity,nonatomic,readonly) BOOL verifiableIdentity;              //@synthesize verifiableIdentity=_verifiableIdentity - In the implementation block
@property (nonatomic,readonly) BOOL senderIsMe;                                                  //@synthesize senderIsMe=_senderIsMe - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;                                //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderBundleID;                                   //@synthesize senderBundleID=_senderBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderComputerName;                               //@synthesize senderComputerName=_senderComputerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderEmail;                                      //@synthesize senderEmail=_senderEmail - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderEmailHash;                                  //@synthesize senderEmailHash=_senderEmailHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderCompositeName;                              //@synthesize senderCompositeName=_senderCompositeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderFirstName;                                  //@synthesize senderFirstName=_senderFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderLastName;                                   //@synthesize senderLastName=_senderLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderID;                                         //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) id senderIcon;                                                    //@synthesize senderIcon=_senderIcon - In the implementation block
@property (nonatomic,readonly) id smallPreviewImage;                                             //@synthesize smallPreviewImage=_smallPreviewImage - In the implementation block
@property (nonatomic,readonly) id previewImage;                                                  //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemsDescription;                                 //@synthesize itemsDescription=_itemsDescription - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemsDescriptionAdvanced;                     //@synthesize itemsDescriptionAdvanced=_itemsDescriptionAdvanced - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rawFiles;                                          //@synthesize rawFiles=_rawFiles - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(NSString *)senderID;
-(void)setItems:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)items;
-(long long)transferTypes;
-(void)setTransferTypes:(long long)arg1 ;
-(id)description;
-(id)previewImage;
-(unsigned long long)hash;
-(NSArray *)rawFiles;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInformation:(id)arg1 ;
-(void)updateUsingCoder:(id)arg1 ;
-(NSString *)senderBundleID;
-(BOOL)didAutoAccept;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canAutoAccept;
-(void)setItemsDescription:(NSString *)arg1 ;
-(BOOL)senderIsMe;
-(void)setDidAutoAccept:(BOOL)arg1 ;
-(BOOL)isVerifiableIdentity;
-(NSString *)senderComputerName;
-(NSString *)senderEmail;
-(NSString *)senderEmailHash;
-(NSString *)senderCompositeName;
-(NSString *)senderFirstName;
-(NSString *)senderLastName;
-(id)senderIcon;
-(id)smallPreviewImage;
-(NSString *)itemsDescription;
-(NSDictionary *)itemsDescriptionAdvanced;
@end

