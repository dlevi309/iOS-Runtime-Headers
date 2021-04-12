/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(AMSDialogRequest *)originalRequest;
-(id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2 ;
-(void)setTextfieldValues:(NSArray *)arg1 ;
-(NSString *)selectedActionIdentifier;
-(NSArray *)textfieldValues;
-(void)setSelectedActionIdentifier:(NSString *)arg1 ;
@end

