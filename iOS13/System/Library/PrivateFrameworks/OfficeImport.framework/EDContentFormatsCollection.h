/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection {

	unsigned long long mNextContentFormatId;

}
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)setupDefaults;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2 ;
-(BOOL)isOverwritingKeyOK;
@end

