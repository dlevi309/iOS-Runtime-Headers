/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)lastPage;
-(NSData *)dataRepresentation;
-(id)init;
-(id)initWithPage:(id)arg1 changeToken:(id)arg2 ;
-(NSData *)lastChangeToken;
-(id)description;
-(id)initWithChangeToken:(id)arg1 ;
-(unsigned long long)phase;
-(BOOL)isEqual:(id)arg1 ;
@end

