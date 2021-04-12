/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSData;

@interface FPXIndexState : NSObject {

	NSData* _lastPage;
	NSData* _lastChangeToken;

}

@property (nonatomic,readonly) unsigned long long phase; 
@property (nonatomic,readonly) NSData * lastPage;                        //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,readonly) NSData * lastChangeToken;                 //@synthesize lastChangeToken=_lastChangeToken - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)stateWithData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)dataRepresentation;
-(unsigned long long)phase;
-(NSData *)lastPage;
-(id)initWithPage:(id)arg1 changeToken:(id)arg2 ;
-(NSData *)lastChangeToken;
-(id)initWithChangeToken:(id)arg1 ;
@end

