/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

	NSRange _range;
	double _offsetInLine;

}
+(id)restorableScrollPositionForTextView:(id)arg1 ;
+(id)restorableScrollPositionForStateRestoration:(id)arg1 ;
+(id)restorableScrollPositionWithDictionary:(id)arg1 ;
+(id)restorableScrollPositionWithRange:(NSRange)arg1 ;
-(id)dictionaryRepresentation;
-(NSRange)range;
-(id)initWithTextView:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTextViewForStateRestoration:(id)arg1 ;
-(double)offsetWithinLine;
@end

