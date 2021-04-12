/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSDialogRequest, NSString, NSArray, NSMutableDictionary;

@interface AMSDialogResult : NSObject <NSSecureCoding> {

	AMSDialogRequest* _originalRequest;
	NSString* _selectedActionIdentifier;
	NSArray* _textfieldValues;
	NSMutableDictionary* _userInfo;

}

@property (nonatomic,readonly) AMSDialogRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,copy) NSString * selectedActionIdentifier;                 //@synthesize selectedActionIdentifier=_selectedActionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * textfieldValues;                           //@synthesize textfieldValues=_textfieldValues - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(AMSDialogRequest *)originalRequest;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)selectedActionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2 ;
-(void)setTextfieldValues:(NSArray *)arg1 ;
-(NSArray *)textfieldValues;
-(void)setSelectedActionIdentifier:(NSString *)arg1 ;
@end

