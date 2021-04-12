/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OADFormula : NSObject {

	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;

}
-(id)name;
-(id)description;
-(int)type;
-(void)setName:(id)arg1 ;
-(OADFormulaArg)argAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 arg0:(OADFormulaArg)arg2 arg1:(OADFormulaArg)arg3 arg2:(OADFormulaArg)arg4 ;
@end

