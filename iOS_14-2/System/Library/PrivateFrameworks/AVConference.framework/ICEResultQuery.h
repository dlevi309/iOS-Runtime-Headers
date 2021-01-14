/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(unsigned)callID;
-(void)setCallID:(unsigned)arg1 ;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(tagCONNRESULT*)result;
-(void)dealloc;
-(id)initWithCallID:(unsigned)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

