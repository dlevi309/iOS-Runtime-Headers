/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {

	long long _selectedButtonIndex;
	NSArray* _textFieldValues;

}

@property (assign,nonatomic) long long selectedButtonIndex;              //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (nonatomic,copy) NSArray * textFieldValues;                    //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setTextFieldValues:(NSArray *)arg1 ;
-(NSArray *)textFieldValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
@end

