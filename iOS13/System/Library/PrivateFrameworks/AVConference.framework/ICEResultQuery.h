/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)dealloc;
-(tagCONNRESULT*)result;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(id)initWithCallID:(unsigned)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

