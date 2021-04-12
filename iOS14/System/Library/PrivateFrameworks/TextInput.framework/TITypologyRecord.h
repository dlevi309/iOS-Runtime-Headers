/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding> {

	double _timestamp;
	NSUUID* _recordID;

}

@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSUUID * recordID;              //@synthesize recordID=_recordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordClasses;
-(id)changedText;
-(id)textSummaryForAutocorrection:(id)arg1 ;
-(void)setRecordID:(NSUUID *)arg1 ;
-(id)init;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummary;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)recordID;
-(void)setTimestamp:(double)arg1 ;
@end

