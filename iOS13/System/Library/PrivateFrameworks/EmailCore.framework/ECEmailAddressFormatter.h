/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <Foundation/NSFormatter.h>

@interface ECEmailAddressFormatter : NSFormatter {

	long long _style;
	BOOL _shouldIncludeDisplayName;

}

@property (assign,nonatomic) BOOL shouldIncludeDisplayName;              //@synthesize shouldIncludeDisplayName=_shouldIncludeDisplayName - In the implementation block
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setShouldIncludeDisplayName:(BOOL)arg1 ;
-(id)stringFromEmailAddress:(id)arg1 ;
-(id)stringFromEmailAddressConvertible:(id)arg1 ;
-(id)stringFromEmailAddressList:(id)arg1 ;
-(id)emailAddressFromString:(id)arg1 ;
-(BOOL)shouldIncludeDisplayName;
-(id)_stringFromEmailAddress:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromEmailAddressConvertible:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromEmailAddressList:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromGroupEmailAddress:(id)arg1 ;
-(id)_stringFromMailboxAddress:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_groupListString:(id)arg1 ;
@end

