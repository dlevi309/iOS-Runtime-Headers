/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/CRRegister.h>

@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister {

	CRSet* _values;
	NSSet* _cachedValues;

}

@property (nonatomic,retain) CRSet * values;                    //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSSet * cachedValues;              //@synthesize cachedValues=_cachedValues - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setValues:(CRSet *)arg1 ;
-(CRSet *)values;
-(id)contents;
-(id)initWithValues:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(NSSet *)cachedValues;
-(void)setCachedValues:(NSSet *)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(void)mergeWithRegisterMultiValue:(id)arg1 ;
-(id)allContents;
@end

