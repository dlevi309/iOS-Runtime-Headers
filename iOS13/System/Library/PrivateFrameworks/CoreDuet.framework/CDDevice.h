/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString;

@interface CDDevice : NSObject {

	BOOL _isDefaultPaired;
	unsigned _identifier;
	NSString* _modelIdentifier;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign) BOOL isDefaultPaired;                      //@synthesize isDefaultPaired=_isDefaultPaired - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id*)arg5 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 ;
-(BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(BOOL)requestLogDataWithError:(id*)arg1 ;
-(NSString *)modelIdentifier;
-(BOOL)isDefaultPaired;
-(void)setIsDefaultPaired:(BOOL)arg1 ;
@end

