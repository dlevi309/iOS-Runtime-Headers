/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection {

	unsigned long long mNextContentFormatId;

}
-(id)init;
-(void)setupDefaults;
-(unsigned long long)addObject:(id)arg1 ;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2 ;
-(BOOL)isOverwritingKeyOK;
@end

