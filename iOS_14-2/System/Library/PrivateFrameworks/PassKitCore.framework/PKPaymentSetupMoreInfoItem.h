/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSData;

@interface PKPaymentSetupMoreInfoItem : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hideAlternativeAction;
	NSString* _nextActionOverride;
	NSString* _doneActionOverride;
	NSString* _alternativeActionOverride;
	BOOL _hasAlternativeAction;
	NSString* _title;
	NSString* _body;
	NSString* _linkText;
	NSURL* _linkURL;
	long long _type;
	NSString* _nextAction;
	NSString* _doneAction;
	NSString* _alternativeAction;
	NSURL* _imageURL;
	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                           //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkText;                       //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkURL;                           //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternativeAction;                      //@synthesize hasAlternativeAction=_hasAlternativeAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * nextAction;                     //@synthesize nextAction=_nextAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * doneAction;                     //@synthesize doneAction=_doneAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternativeAction;              //@synthesize alternativeAction=_alternativeAction - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                          //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                 //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)body;
-(NSURL *)linkURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)linkText;
-(NSData *)imageData;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)nextAction;
-(NSString *)doneAction;
-(id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2 ;
-(void)_updateActionStrings;
-(id)initWithMoreInfoDictionary:(id)arg1 ;
-(BOOL)hasAlternativeAction;
-(NSString *)alternativeAction;
-(NSURL *)imageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)title;
@end

