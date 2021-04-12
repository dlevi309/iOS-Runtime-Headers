/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/NSISVariable.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {

	NSString* _name;
	int _valueRestriction;
	BOOL _shouldBeMinimized;
	BOOL _valueIsUserObservable;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) int valueRestriction;                            //@synthesize valueRestriction=_valueRestriction - In the implementation block
@property (assign) BOOL shouldBeMinimized;                          //@synthesize shouldBeMinimized=_shouldBeMinimized - In the implementation block
@property (assign) BOOL valueIsUserObservable;                      //@synthesize valueIsUserObservable=_valueIsUserObservable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)valueRestriction;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)markedConstraint;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(BOOL)valueIsUserObservable;
-(NSString *)name;
-(BOOL)shouldBeMinimized;
-(void)setShouldBeMinimized:(BOOL)arg1 ;
-(void)setValueRestriction:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setValueIsUserObservable:(BOOL)arg1 ;
-(oneway void)dealloc;
@end

