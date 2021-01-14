/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKTransientAssertion.h>

@class NSString;

@interface NPKTransientPassAssertion : NPKTransientAssertion {

	BOOL _requestServiceMode;
	BOOL _disableCardSelection;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NSString * uniqueID;                    //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL requestServiceMode;                //@synthesize requestServiceMode=_requestServiceMode - In the implementation block
@property (assign,nonatomic) BOOL disableCardSelection;              //@synthesize disableCardSelection=_disableCardSelection - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setDisableCardSelection:(BOOL)arg1 ;
-(void)_resyncState;
-(id)initWithPassWithUniqueID:(id)arg1 ;
-(void)setRequestServiceMode:(BOOL)arg1 ;
-(BOOL)requestServiceMode;
-(BOOL)disableCardSelection;
@end

