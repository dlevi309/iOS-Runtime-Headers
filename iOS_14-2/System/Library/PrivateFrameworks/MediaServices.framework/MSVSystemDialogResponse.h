/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSArray;

@interface MSVSystemDialogResponse : NSObject {

	long long _buttonIdentifier;
	NSArray* _textFieldValues;

}

@property (nonatomic,readonly) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * textFieldValues;               //@synthesize textFieldValues=_textFieldValues - In the implementation block
-(long long)buttonIdentifier;
-(id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2 ;
-(id)description;
-(NSArray *)textFieldValues;
@end

