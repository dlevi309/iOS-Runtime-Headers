/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSUUID *)recordID;
-(id)shortDescription;
-(void)setRecordID:(NSUUID *)arg1 ;
-(id)textSummary;
-(id)changedText;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(id)textSummaryForAutocorrection:(id)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

