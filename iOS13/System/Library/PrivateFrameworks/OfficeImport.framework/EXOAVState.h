/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

