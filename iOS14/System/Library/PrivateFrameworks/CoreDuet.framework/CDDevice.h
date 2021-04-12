/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)isDefaultPaired;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 ;
-(BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIsDefaultPaired:(BOOL)arg1 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(BOOL)requestLogDataWithError:(id*)arg1 ;
-(NSString *)modelIdentifier;
-(unsigned)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

