/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCalendarImage.h>
@class _SFPBDate, NSData;


@protocol _SFPBCalendarImage <NSObject>
@property (nonatomic,retain) _SFPBDate * date; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setDate:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBDate *)date;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBDate, NSData, NSString;

@interface _SFPBCalendarImage : PBCodable <_SFPBCalendarImage, NSSecureCoding> {

	_SFPBDate* _date;

}

@property (nonatomic,retain) _SFPBDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setDate:(_SFPBDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBDate *)date;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

