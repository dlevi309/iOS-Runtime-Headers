/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OAVReadState.h>

@class EXReadState;

@interface EXOAVState : OAVReadState {

	EXReadState* mEXReadState;

}

@property (__weak,readonly) EXReadState * exState; 
-(EXReadState *)exState;
-(id)initWithEXReadState:(id)arg1 packagePart:(id)arg2 ;
@end

