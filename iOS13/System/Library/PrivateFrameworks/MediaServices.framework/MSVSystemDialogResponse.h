/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSArray;

@interface MSVSystemDialogResponse : NSObject {

	long long _buttonIdentifier;
	NSArray* _textFieldValues;

}

@property (nonatomic,readonly) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * textFieldValues;               //@synthesize textFieldValues=_textFieldValues - In the implementation block
-(id)description;
-(NSArray *)textFieldValues;
-(id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2 ;
-(long long)buttonIdentifier;
@end

