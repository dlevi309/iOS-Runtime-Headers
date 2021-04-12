/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSISVariable.h>
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
-(oneway void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)shouldBeMinimized;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(id)markedConstraint;
-(int)valueRestriction;
-(void)setValueRestriction:(int)arg1 ;
-(void)setShouldBeMinimized:(BOOL)arg1 ;
-(BOOL)valueIsUserObservable;
-(void)setValueIsUserObservable:(BOOL)arg1 ;
@end

