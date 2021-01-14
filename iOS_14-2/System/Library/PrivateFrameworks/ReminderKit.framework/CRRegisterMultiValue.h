/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contents;
-(NSSet *)cachedValues;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(CRSet *)values;
-(void)mergeWithRegisterMultiValue:(id)arg1 ;
-(id)allContents;
-(void)setValues:(CRSet *)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setCachedValues:(NSSet *)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
@end

