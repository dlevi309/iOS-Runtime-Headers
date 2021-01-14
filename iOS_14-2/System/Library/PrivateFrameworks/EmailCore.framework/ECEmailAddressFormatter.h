/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <Foundation/NSFormatter.h>

@interface ECEmailAddressFormatter : NSFormatter {

	long long _style;
	BOOL _shouldIncludeDisplayName;

}

@property (assign,nonatomic) BOOL shouldIncludeDisplayName;              //@synthesize shouldIncludeDisplayName=_shouldIncludeDisplayName - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromEmailAddressConvertible:(id)arg1 ;
-(id)stringFromEmailAddressList:(id)arg1 ;
-(void)setShouldIncludeDisplayName:(BOOL)arg1 ;
-(id)stringFromEmailAddress:(id)arg1 ;
-(id)emailAddressFromString:(id)arg1 ;
-(BOOL)shouldIncludeDisplayName;
-(id)_stringFromEmailAddress:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromEmailAddressConvertible:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromEmailAddressList:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_stringFromGroupEmailAddress:(id)arg1 ;
-(id)_stringFromMailboxAddress:(id)arg1 includeDisplayName:(BOOL)arg2 ;
-(id)_groupListString:(id)arg1 ;
@end

